all:
	xelatex handout.tex
	xelatex handout.tex

clean:
	rm -f handout.log handout.aux handout.out
