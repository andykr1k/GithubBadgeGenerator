#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string repoName;
    cout << "Whose repo are you generating badges for: " << endl;
    cin >> repoName;

    string repoTitle;
    cout << "Which repo are you generating badges for: " << endl;
    cin >> repoTitle;
    
    string repo = repoName + "/" + repoTitle;

    string line1 = "<img alt=\"GitHub Language Count\" src=\"https://img.shields.io/github/languages/count/";
    string line2 = "<img alt=\"\" src=\"https://img.shields.io/github/repo-size/";
    string line3 = "<img alt=\"GitHub Issues\" src=\"https://img.shields.io/github/issues/";
    string line4 ="<img alt=\"GitHub Closed Issues\" src=\"https://img.shields.io/github/issues-closed/";
    string line5 = "<img alt=\"GitHub Contributors\" src=\"https://img.shields.io/github/contributors/";
    string line6 = "<img alt=\"GitHub Commit Activity (Week)\" src=\"https://img.shields.io/github/commit-activity/w/";
    string style = "?style=for-the-badge\"/>";
    string badge1 = line1 + repo + style;
    string badge2 = line2 + repo + style;
    string badge3 = line3 + repo + style;
    string badge4 = line4 + repo + style;
    string badge5 = line5 + repo + style;
    string badge6 = line6 + repo + style;

    //Open File
    ofstream File("GENERATEDREADME.md");
    // Write to the file
    File << "# ";
    File << repoTitle << endl;
    File << endl;
    File << "<div>" << endl;
    File << badge1 << endl;
    File << badge2 << endl;
    File << badge3 << endl;
    File << badge4 << endl;
    File << badge5 << endl;
    File << badge6 << endl;
    File << "</div>" << endl;
    // Close the file
    File.close();

    cout << "README.md for " + repoTitle + " has been generated!" << endl;
}