7219@185-46-8-203:~$ ls
''$'\033'        gateway.txt      ''$'\033''.pub'
 AvanteSecunda   gateway.txt.pub   task.cpp
st107219@185-46-8-203:~$ copy task.cpp
-bash: copy: command not found
st107219@185-46-8-203:~$ cd AvanteSecunda
st107219@185-46-8-203:~/AvanteSecunda$ git commit -a -m "Adding test file cpp"  On branch main
Your branch is up to date with 'origin/main'.

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        project.cpp.save

nothing added to commit but untracked files present (use "git add" to track)
st107219@185-46-8-203:~/AvanteSecunda$ git push
Everything up-to-date
st107219@185-46-8-203:~/AvanteSecunda$ nano tast.cpp
  GNU nano 6.2                        tast.cpp *
        std::cout << spc;
    }
    for (int j = 0; j < 1 + i*2; ++j){
        std::cout<<dtr;
    }
    for (int j = 0; j < ((n - 1 - i)/2); ++j){
        std::cout << spc;
    }
    std::cout << std::endl;
}
}







