for i in $(seq 1 100)
do
    ./neuralNetwork
    echo $i
    mv gmon.out gmon.out.$i
done
