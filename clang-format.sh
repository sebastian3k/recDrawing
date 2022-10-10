# Apply clang-format Mozilla style to all source files
for file in ./src/*.*pp 
do
    clang-format $file -style=Mozilla > $file
done
