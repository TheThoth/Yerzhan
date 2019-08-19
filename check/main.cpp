#include <sstream>
#include <iostream>
#include <vector>

void intro(){
    std::cout << "The COMMANDS that you can use " <<std::endl;
    std::cout << "create <type> <name>: to create new Directory or File" << std::endl;
    std::cout << "delete <type> <name>: to delete the existing File or Directory(if empty)" << std::endl;
    std::cout << "go <name>: to proceed to the defined directory" <<std::endl;
    std::cout << "list: to show the entries of directory" <<std::endl;
    std::cout << "exit: to exit from console" <<std::endl;
    std::cout << "-h: for help" <<std::endl;
    std::cout << "" <<std::endl;
}

std::vector<std::string> stringByWords(std::string str){
    std::string word = "";
    std::vector <std::string> words;
    for(auto i : str){
        if(i == ' '){
            if(word != "") words.push_back(word);
            word = "";
        }
        else{
            word = word + i;
        }
    }
    words.push_back(word);
    return words;
}

int main() {
    intro();
    std::vector<std::string> command;
    std::string str;
    //std::istringstream f("delete rt");
    //::string line;
    //std::string ttt = "I'm   going home";
    //std::vector<std::string> my = stringByWords(ttt);
    //std::cout<<my.size()<<std::endl;
    //for(int i = 0;  i < my.size(); i++){
    //    std::cout << my[i] << std::endl;
    //}
    while(1){
        command.clear();
        getline(std::cin, str);
        command = stringByWords(str);
        if(command.size() > 3){
            std::cout<<"Too much entries or wrong command"<<std::endl;
        }
        else if(command.size() == 3){
            if(command[0] == "create"){
                if(command[1] == "dir" || command[1] == "Dir"){
                    //function;
                }
                else if(command[1] == "f" || command[1] == "F"){
                    //function;
                }
                else{
                    std::cout << "wrong element type: it should be directory(dir) of file(f)";
                }
            }
        }
        else if(command.size() == 2){
            if(command[0] == "go"){
                //function
            }
            else std::cout << "Wrong command" << std::endl;
        }
        else if(command.size() == 1){
            if(command[0] == "exit"){
                break;
            }
            else if(command[0] == "list"){
                //function
                std::cout<< "Show entries" << std::endl;
            }
            else if(command[0] == "-h"){
                intro();
            }
            else{
                std::cout<< "wrong command or too less entries" << std::endl;
                //continue;
            }
        }
    }
    //command.clear();
    //std::cin >> str;
    //command = stringByWords(str);
    //std::cout<< command.size() << std::endl;
    //if(command.size() > 3){
    //    std::cout<<"Too much entries"<<std::endl;
    //}
    //while (std::getline(f, line)) {
    //    std::cout << line << std::endl;
    //}
}