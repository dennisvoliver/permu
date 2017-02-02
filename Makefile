all : sperm perm nprint  per
sperm : sperm.c perm nprint
	gcc -o sperm sperm.c
perm : perm.c
	gcc -o perm perm.c
nprint : nprint.c
	gcc -o nprint nprint.c
per : per.c
	gcc -o per per.c
