
if [[ $1  == "-c" ]]; then
tar -cjvf $2 $@
fi
if [[ $1  == "-e" ]]; then
    tar -xjvf $2
fi
