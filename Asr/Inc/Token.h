#ifndef _TOKEN_
#define _TOKEN_

class TokenC
{
private:
    enum ReturnCodeE
    {
        SUCCESS = 0, // Return success
        ERROR = 1, // Return failed
        ERROR_TOKEN_CURL = 13, // TOKEN CURL 调用错误
        ERROR_TOKEN_PARSE_ACCESS_TOKEN = 15,  // access_token字段在返回结果中不存在
        ERROR_TOKEN_PARSE_SCOPE = 16, // 解析scope字段，或者scope不存在
        ERROR_ASR_FILE_NOT_EXIST = 101, // 本地文件不存在
        ERROR_ASR_CURL = 102 // 识别 curl 错误
    };

public:
    // Get the speeck token and return status 
    static ReturnCodeE SpeechGetToken(const char* apiKey, const char* secretKey, const char* scope, char* token);

    // Parse the token
    static ReturnCodeE ParseToken(const char* response, const char* scope, char* token);

    // Get string from json file
    static ReturnCodeE ObtainJsonStr(const char* json, const char* key, char* value, int valueSize);
};




#endif // _TOKEN_