///week05-4.cpp
///LeetCode �ǲ߭p�e Build-In Function ��2�D
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.length(); i++){ ///�C�@�Ӧr��
            s[i] = tolower(s[i]); //�ܦ��p�g
        } /// �C�Ӧr��, ���ܦ��p�g(���㪩�n #include <ctype.h>)
        // �άO�� #include <cctype> ��ӬO�P�@���ɮש�
        return s; ///���װe�X�h
    }
};
