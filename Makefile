default:
	type python3 > /dev/null 2>&1 && python3 formatter.py < main.cpp > submission.cpp
	g++ submission.cpp -o main