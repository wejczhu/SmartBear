#include "Token.h"

#include <curl/curl.h>
#include <iostream>

// 解析response json ， 获取token，验证scope信息
ReturnCodeE TokenC::SpeechGetToken(const char* apiKey, const char* secretKey, const char* scope, char* token)
{
    char urlPattern[];
    char url[200];
    char* response = nullptr; 

    //std::cout << u

    std::cout << "url is : " << url << std::endl;

    CURL* curl = curl_easy_init();

    if(curl == 0) 
    {
        std::cout << "Failed to get the curl session" << std::endl;
        return ERROR;
    }

    curl_easy_setopt(curl, CURLOPT_URL, url); // 注意返回值判读
    curl_easy_setopt(curl, CURLOPT_CONNECTTIMEOUT, 5);
    curl_easy_setopt(curl, CURLOPT_TIMEOUT, 60); // 60s超时
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writefunc);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

    

    // char url_pattern[] = "%s?grant_type=client_credentials&client_id=%s&client_secret=%s";
    // char url[200];
    // char *response = NULL;

    // snprintf(url, 200, url_pattern, API_TOKEN_URL, api_key, secret_key);
    // printf("url is: %s\n", url);
    // CURL *curl = curl_easy_init();
    // curl_easy_setopt(curl, CURLOPT_URL, url); // 注意返回值判读
    // curl_easy_setopt(curl, CURLOPT_CONNECTTIMEOUT, 5);
    // curl_easy_setopt(curl, CURLOPT_TIMEOUT, 60); // 60s超时
    // curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writefunc);
    // curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

    // CURLcode res_curl = curl_easy_perform(curl);
    // RETURN_CODE res = RETURN_OK;
    // if (res_curl != CURLE_OK) {
    //     snprintf(g_demo_error_msg, BUFFER_ERROR_SIZE, "perform curl error:%d, %s.\n", res,
    //              curl_easy_strerror(res_curl));
    //     res = ERROR_TOKEN_CURL;
    // } else {
    //     res = parse_token(response, scope, token); // 解析token，结果保存在token里
    //     if (res == RETURN_OK) {
    //         printf("token: %s of %s\n", token, response);
    //     }
    // }
    // free(response);
    // curl_easy_cleanup(curl);
    // return res;
}