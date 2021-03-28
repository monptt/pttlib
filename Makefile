default:
	python3 formatter.py < main.cpp > submission.cpp
	g++ submission.cpp -o main