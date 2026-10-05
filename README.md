# nexte-algorithm-hw02
项目：算法组第二次作业
姓名：刘明喆
学号：3262431035
环境：C++ 17 ，CMake 3.28,ubuntu系统

下面是从克隆到执行完命令的全过程：
1.gti clone https://github.com//jiji-123-1111111111/nexte-algorithm-hw02.git
  cd nexte-algorithm-hw02
  nvim CMakeLists.txt  
  mkdir src
  nvim 三个作业
  


2.cmake -S . -B build
  cmake --build build
  mkdir tests
  ../build/(三个作业的任务名)  < (构建的测试文件名）.in > ()_actual.out
  diff （构建的测试文件名）()_actual.out
  结果为全部通过，具体内容应该能在仓库里面看见。


3.检查git配置（在我的nexte-algorithm-hw02目录里面）
  检查状态并提交（git status   //  git add README.MD .....  //git commmit ...... // )
  合并分支（git switch // git merge ......)
  推送至远端仓库（git push ......)
  验证提交记录（git log --oneline --graph --all  //  git diff  )
  

4.重新克隆验证
  cd ~
  mkdir verify_hw02
  cd verify_hw02
  gti clone ......
  重复2的编译运行。


  5.补充说明ai的帮助
    使用ai帮助理解vector，set两种容器的用法；
    利用ai查找循环结构中出现的问题以及完善结构，如（for（）结尾不能有>;<   //  在数组中取得数字（int 变量 ：（容器库名称）//  ......
 

6.作业思路
一.先设计一个能够读取n个变量的循环读数结构，利用if条件判断连续数current的变化，最后输出本组数据中的最大连续数。时间复杂度O（n） << 这个其实是直接超题目里面的
二.需要用到去重容器set，构建n次循环结构读取n个数，在循环结构中把这些数字塞进set中，再输出set容器中的数字个数与数字。并未按照题目运用vector容器，因为vector容器去重有点复杂暂时没想到怎么用待会去试试。时间复杂度O（n log n） << 也是超的
三.利用vector数组算总和，采用循环结构去读取n个变量并算出每一步总和塞进vector容器内部，再读取q作为查询次数并设计循环结构，此时可以用到vector容器的前缀了以及vector容器内的数据，因为单独一个一个加太麻烦所以前面vector容器就直接选择用来放置前几个数总和了，最后通过计算得出结果并且每个结果之间换行。时间复杂度O（n+q） << ......
