cmake_minimum_required(VERSION 3.8)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        A+B/a.out
        A+B/AandB
        A+B/AandB.c
        A+B/AI.c
        A+B/aPlusb.c
        A+B/BII.c
        A+B/CIII.c
        A+B/D.c
        A+B/E.c
        A+B/F.c
        A+B/G.c
        A+B/H.c
        A+B/huangang.c
        A+B/links.c
        A+B/linst.c
        cow/a.c
        cow/cow.c
        email/email.c
        linklist/a.out
        linklist/creat.c
        score/a.out
        score/score
        score/score.c
        zhizhen/a
        zhizhen/shuzu1.c
        zhizhen/shuzu11
        zhizhen/shuzu11.c
        zhizhen/shuzu2
        zhizhen/shuzu2.c
        zhizhen/shuzu22
        zhizhen/shuzu22.c
        333
        evenSum
        evenSum.c
        lowestCommon/lowestCommon.c)

add_executable(algorithm ${SOURCE_FILES})