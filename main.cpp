#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;

int main() {
    string repo;
    string repoName;
    string repoTitle;
    string colorString;
    string styleString;
    int color;
    int style;
    vector<string> colors = {"?", "?color=red", "?color=blue", "?color=purple", "?color=green", "?color=yellow", "?color=pink", "?color=orange", "?color=brown", "?color=grey"};
    vector<string> styles = {"\"/>", "&style=for-the-badge\"/>"};

    system("clear");
    cout << "Whose repo are you generating badges for: ";
    cin >> repoName;

    system("clear");
    cout << "Which repo are you generating badges for: ";
    cin >> repoTitle;
    
    repo = repoName + "/" + repoTitle;

    system("clear");
    cout << "Which color would you like the badge to be: " << endl;
    cout << "1 - Github Original" << endl;
    cout << "2 - For The Badge" << endl;
    cin >> style;
    styleString = styles.at(style - 1);

    system("clear");
    cout << "Which color would you like the badge to be: " << endl;
    cout << "0 - Github Original" << endl;
    cout << "1 - Red" << endl;
    cout << "2 - Blue" << endl;
    cout << "3 - Purple" << endl;
    cout << "4 - Green" << endl;
    cout << "5 - Yellow" << endl;
    cout << "6 - Pink" << endl;
    cout << "7 - Orange" << endl;
    cout << "8 - Brown" << endl;
    cout << "9 - Grey" << endl;
    cin >> color;
    colorString = colors.at(color);

    string line1 = "<img alt=\"GitHub Language Count\" src=\"https://img.shields.io/github/languages/count/";
    string line2 = "<img alt=\"\" src=\"https://img.shields.io/github/repo-size/";
    string line3 = "<img alt=\"GitHub Issues\" src=\"https://img.shields.io/github/issues/";
    string line4 ="<img alt=\"GitHub Closed Issues\" src=\"https://img.shields.io/github/issues-closed/";
    string line5 = "<img alt=\"GitHub Contributors\" src=\"https://img.shields.io/github/contributors/";
    string line6 = "<img alt=\"GitHub Commit Activity (Week)\" src=\"https://img.shields.io/github/commit-activity/w/";
    string badge1 = line1 + repo + colorString + styleString;
    string badge2 = line2 + repo + colorString + styleString;
    string badge3 = line3 + repo + colorString + styleString;
    string badge5 = line5 + repo + colorString + styleString;
    string badge4 = line4 + repo + colorString + styleString;
    string badge6 = line6 + repo + colorString + styleString;

    //Open File
    ofstream File("/Users/andrew/Desktop/Tools/READ.md");
    // Write to the file
    File << "# ";
    File << repoTitle << endl;
    File << endl;
    File << "# Summary" << endl;
    File << endl;
    File << "<div>" << endl;
    File << badge1 << endl;
    File << badge2 << endl;
    File << badge3 << endl;
    File << badge4 << endl;
    File << badge5 << endl;
    File << badge6 << endl;
    File << "</div>" << endl;
    File << endl;
    File << "# References" << endl;
    File << endl;
    // Close the file
    File.close();

    system("clear");
    cout << "README.md for " + repoTitle + " has been generated!" << endl;
}
