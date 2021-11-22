//
// Created by 張睿玹 on 2021/11/22.
//

#include<json.h>
#include<stdio.h>
signed main(){
    struct json_object *para = json_object_from_file("./test.json");
    struct json_object *info = json_object_object_get(para, "name");

    printf("%s", json_object_get_string(info));
    return 0;
}