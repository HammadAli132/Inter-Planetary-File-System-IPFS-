
#include <iostream>
#include "System.h"
using namespace std;


//int main() {
//    BTree<int> B(3);
//
//    for (int i = 1; i <= 23; i += 1) {
//        B.insert(i);
//    }
//
//    /*for (int i : {54, 365, 20, 38, 56, 26, 52, 47, 90, 48, 25, 74, 35, 37}) {
//        B.insert(i);
//    }
//    for (int i : {100, 302, 309, 373, 18, 374}) {
//        B.insert(i);
//    }*/
//
//    //B.deleteNode(9);
//    visualizeTree(generateDotCode(B.getRoot()));
//    return 0;
//}

//int main() {
//
//	cout << endl;
//	const string input1 = "abc";
//	const string input2 = "daniyal is a good programmer";
//
//	SHA1 checksum;
//	checksum.update(input1);
//	const string hash = checksum.final();
//
//	SHA1 checksum2;
//	checksum2.update(input2);
//	const string hash2 = checksum2.final();
//
//	cout << "The SHA-1 of \"" << input1 << "\" is: " << hash << endl;
//	cout << "The SHA-1 of \"" << input2 << "\" is: " << hash2 << endl;
//	cout << hash.length() << endl;;
//	cout << SHA1::from_file("C:\\Users\\user\\Documents\\Bandicam\\bandicam 2023-12-09 17-03-21-836.mp4") << " *" << "IMG_4888.jpg" << endl;
//	return 0;
//}

int main() {
	System sys; sys.start();
	/*DHT sys;
	sys.setBitSize(5);
	sys.makeRoutingTables();

	sys.addFile("D:\\dummy\\main.asm");
	sys.addFile("D:\\dummy\\another.docx");
	sys.addFile("D:\\dummy\\file.txt");
	sys.addFile("D:\\dummy\\file2.txt");
	sys.addFile("D:\\dummy\\document.rtf");
	sys.addFile("D:\\dummy\\another.docx");
	sys.showMachines();
	sys.removeFile(BIG_INT("30"));
	sys.printBtree();
	sys.removeMachine(BIG_INT("8"));*/
	return 0;
}