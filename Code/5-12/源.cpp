#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, tCnt = 0, sCnt = 0, nCnt = 0,ffCnt=0,flCnt=0,fiCnt=0;
	char ch,pre='\0';
	while (cin >> std::noskipws >> ch) {
		switch (ch)
		{
		case 'a':
		case 'A':
			++aCnt;
			break;
		case 'e':
		case 'E':
			++eCnt;
			break;
		case 'i':
		case 'I':
			++iCnt;
			if (pre == 'f' || pre == 'F') 
				++fiCnt;
			break;
		case 'o':
		case 'O':
			++oCnt;
			break;
		case 'u':
		case 'U':
			++uCnt;
			break;
		case '\t':
			++tCnt;
			break;
		case ' ':
			++sCnt;
			break;
		case '\n':
			++nCnt;
			break;
		case 'F':
		case 'f':
			if (pre == 'f' || pre == 'F') {
				++ffCnt;
				break;
			}
		case 'L':
		case 'l':
			if (pre == 'f' || pre == 'F') {
				++flCnt;
				break;
			}

		}
		pre = ch;
	}
		

	cout << "Number of vowel a(A): \t" << aCnt << '\n'
		<< "Number of vowel e(E): \t" << eCnt << '\n'
		<< "Number of vowel i(I): \t" << iCnt << '\n'
		<< "Number of vowel o(O): \t" << oCnt << '\n'
		<< "Number of vowel u(U): \t" << uCnt << '\n'
		<< "Number of vowel space: \t" << sCnt << '\n'
		<< "Number of vowel enter: \t" << nCnt << '\n'
		<< "Number of vowel tab: \t" << tCnt << '\n'
		<< "Number of vowel ff: \t" << ffCnt << '\n'
		<< "Number of vowel fl: \t" << flCnt << '\n'
		<< "Number of vowel fi: \t" << fiCnt << endl;

	return 0;
}