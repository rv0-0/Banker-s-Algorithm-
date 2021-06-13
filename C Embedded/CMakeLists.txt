cmake_minimum_required(VERSION 3.18.4)

project(BankersAlgo)

include_directories(include)

add_executable(app.exe src/accept.c src/add.c src/banker_algo.c src/print.c src/res_request.c src/safety.c client/main.c)
