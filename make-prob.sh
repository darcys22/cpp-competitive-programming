for filepath in $*; do
	mkdir -p $filepath
	filename=$(basename "$filepath")
	#sed -e s/\\\$NAME\\\$/$filename/g template/template.cpp > $filepath/$main.cpp
	cp ./template/Makefile $filepath/Makefile
	cp ./template/template.cpp $filepath/main.cpp
done
