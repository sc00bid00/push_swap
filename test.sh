#!/bin/bash
RED="\033[31m"
GREEN="\033[32m"
ENDCOLOR="\033[0m"
echo "" > arguments.txt
for i in $(seq 1 100)
do
	ARG=$(seq -500 500 | sort -R | head -500 | tr "\n" " ")
	VAR=$(./push_swap $ARG | wc -l)
	CHK=$(./push_swap $ARG | ./checker $ARG)
	if (($VAR <= 5500)) && (($CHK == "OK"))
	then
		echo -e "${GREEN}$i\t$VAR\t$CHK${ENDCOLOR}"
	else
		echo -e "${RED}$i\t$VAR\t$CHK${ENDCOLOR}"
		echo $ARG >> arguments.txt
		echo -e "\n" >> arguments.txt
	fi
done
