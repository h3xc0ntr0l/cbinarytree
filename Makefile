make collin:
	gcc main.c -o collin
	echo 'making collins files complete.'

make binarytree:
	gcc binarytree.c btreeimp.c -o bt
	echo 'making michaels files complete'

make all:
	gcc main.c -o collin
	gcc binarytree.c btreeimp.c -o bt

