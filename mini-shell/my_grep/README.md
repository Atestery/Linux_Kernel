# Компиляция
gcc my_grep.c -o my_grep

# Скопировать программу в /usr/bin
# Для всех пользователей (стандартное место)
sudo cp -v my_grep /usr/local/bin/

# Запуск
./my_grep test.txt

# Удалить программу
sudo rm -fv /usr/local/bin/my_grep

