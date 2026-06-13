# Компиляция
gcc my_cat.c -o my_cat

# Скопировать программу в /usr/bin
# Для всех пользователей (стандартное место)
sudo cp -v my_cat /usr/local/bin/

# Запуск
./my_cat file.txt

# Удалить программу
sudo rm -fv /usr/local/bin/my_cat

