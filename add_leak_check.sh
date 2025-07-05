#!/bin/bash

# 全てのMakefileにリークチェック機能を追加するスクリプト

for i in {00..09}; do
    for ex in {00..02}; do
        makefile_path="cpp${i}/ex${ex}/Makefile"
        
        if [ -f "$makefile_path" ]; then
            # MAGENTAカラーを追加
            sed -i 's/WHITE\s*:= \\033\[37m/WHITE\t\t:= \\033[37m\nMAGENTA\t\t:= \\033[35m/' "$makefile_path"
            
            # リークチェックターゲットを追加
            sed -i 's/re: fclean all/re: fclean all\n\n# リークチェック\nleak: $(NAME)\n\t@echo "$(MAGENTA)$(BOLD)========================================="\n\t@echo "    Checking Memory Leaks..."\n\t@echo "=========================================$(RESET)"\n\t@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes .\/$(NAME) "test string"\n\t@echo "$(GREEN)$(BOLD)Leak check completed!$(RESET)"/' "$makefile_path"
            
            # .PHONYにleakを追加
            sed -i 's/\.PHONY: all clean fclean re/.PHONY: all clean fclean re leak/' "$makefile_path"
            
            echo "Added leak check to cpp${i}/ex${ex}/Makefile"
        fi
    done
done

echo "All Makefiles have been updated with leak check functionality!"
