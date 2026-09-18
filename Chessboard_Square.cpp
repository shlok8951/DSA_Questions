/*
Problem -> given a string of chessboard coordinates , if it is white return true else return false.
  */
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int x = coordinates[1]-'0';

        if((coordinates[0]=='a'||coordinates[0]=='c'||coordinates[0]=='e'||coordinates[0]=='g') && x%2==0){
            return true;
        }
        else if((coordinates[0]=='b'||coordinates[0]=='d'||coordinates[0]=='f'||coordinates[0]=='h') && x%2!=0){
            return true;
        }
        return false;
    }
};
