#!/bin/bash
RED="\033[31m"
GREEN="\033[32m"
ENDCOLOR="\033[0m"
echo -e "Sample size ?"
read SIZE
if (($SIZE < 500))
then
	TH=700
else
	TH=5500
fi
echo -e "Test runs?"
read RUNS
echo "" > arguments.txt
echo -e "#\t    Kicks\tSorted"
echo "-------------------------------"
for i in $(seq 1 $RUNS)
do
	ARG=$(seq -$SIZE $SIZE | sort -R | head -$SIZE | tr "\n" " ")
	VAR=$(./push_swap $ARG | wc -l)
	CHK=$(./push_swap $ARG | ./checker $ARG)
	if (($VAR <= $TH)) && (($CHK == "OK"))
	then
		echo -e "${GREEN}$i\t$VAR OK\t$CHK${ENDCOLOR}"
	else
		echo -e "${RED}$i\t$VAR KO\t$CHK${ENDCOLOR}"
		echo $ARG >> arguments.txt
		echo -e "\n" >> arguments.txt
	fi
done
