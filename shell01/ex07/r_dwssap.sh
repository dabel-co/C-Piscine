cat /etc/passwd | sed '/#/d' | awk "NR%2==0" | sed 's/:.*//' | rev | sort -r | awk "FNR>=$FT_LINE1 && FNR<=$FT_LINE2" | sed 's/$/,/' | tr '\n' ' ' | sed 's/, *$/./' | tr -d '\n'
