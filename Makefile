default:
	python formatter.py < main.cpp > submission.cpp
	g++ submission.cpp -o main