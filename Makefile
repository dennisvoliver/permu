all : sperm perm nprint rperm
sperm : sperm.c perm nprint
	gcc -o sperm sperm.c
perm : perm.c
	gcc -o perm perm.c
nprint : nprint.c
	gcc -o nprint nprint.c
rperm : rperm.c
	gcc -o rperm rperm.c
