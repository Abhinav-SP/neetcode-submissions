class Solution {
public:

    string encode(vector<string>& strs) {
        std::string enc_str;
        for(string item : strs){
            enc_str.append(item);
            enc_str.append("\x1f");
        }
        return enc_str;
    }

    vector<string> decode(string s) {
        std::vector<string> dec_vec;
        std::string buffer;
        for(char chr : s){
            if(chr != '\x1f'){
                buffer += chr;
            }
            else{
                dec_vec.push_back(buffer);
                buffer.clear();
            }
        }
        return dec_vec;
    }
};
