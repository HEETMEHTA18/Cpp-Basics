#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// XOR decrypt function
void decryptFile(const string& inputPath, const string& outputPath, char key) {
    ifstream in(inputPath, ios::binary);
    ofstream out(outputPath, ios::binary);

    char ch;
    while (in.get(ch)) {
        out.put(ch ^ key);
    }

    in.close();
    out.close();
}

int main() {
    // In production: use multipart parser to get actual uploaded file
    string inputFile = "/tmp/uploaded_encrypted_file.txt";
    string outputFile = "/tmp/decrypted_file.txt";

    decryptFile(inputFile, outputFile, 'K');

    // Output content-type and attachment headers
    cout << "Content-Type: application/octet-stream\r\n";
    cout << "Content-Disposition: attachment; filename=\"decrypted_file.txt\"\r\n\r\n";

    // Output decrypted file content to browser
    ifstream result(outputFile, ios::binary);
    cout << result.rdbuf();

    return 0;
}
