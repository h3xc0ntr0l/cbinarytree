collin:
	gcc main.c -o collin

binarytree:
	gcc binarytree.c btreeimp.c -o btree

numbergen:
	gcc numbergen.c -o numbergen

all:
	gcc main.c -o collin
	gcc binarytree.c btreeimp.c -o btree
	gcc numbergen.c -o numbergen
