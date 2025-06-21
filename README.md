﻿# Introdução à Programação
Disciplina do Instituto Federal de Pernambuco Tecnologia em Analise e Desenvolvimento de Sistemas pelo Prof. Marco Domingues.


---
 * [**Instalação do IDE Code::Blocks no Ubuntu**](#ubuntu)
 * [**Instalação do IDE Code::Blocks no Debian**](#debian)
 * [**Instalação do IDE Code::Blocks no Fedora**](#fedora)
 ---

<a id="ubuntu"></a>
## Instalação do IDE Code::Blocks no Ubuntu
Inicialmente, iremos agora atualizar a lista de repositórios, assim como os pacotes do sistema operacional:
```
sudo apt update && sudo apt upgrade -y
```
Para instalar o Code::Blocks, execute o seguinte comando:
```
sudo apt install codeblocks codeblocks-contrib xterm build-essential
```
<a id="debian"></a>
## Instalação do IDE Code::Blocks no Debian
Se você usa o Debian como sistema, muito provavelmente você já tem nos repositórios padrão. Então, o procedimento de instalação segue de forma semelhante:
```
sudo apt update && sudo apt upgrade -y
```
E sem a necessidade de adição de PPA’s iremos instalar o IDE:
```
sudo apt install codeblocks codeblocks-contrib xterm build-essential
```
<a id="fedora"></a>
## Instalação do IDE Code::Blocks no Fedora
Para a instalação completa do Codeblocks, execute o seguinte comando:
```
sudo dnf install codeblocks*
```
O programa foi instalado normalmente. Porém quando executamos qualquer programa em `.c`, veremos o seguinte erro:
```
-------------- Build: Debug in sempreUpdate (compiler: GNU GCC Compiler)---------------

g++ -o bin/Debug/sempreUpdate obj/Debug/main.o 
/bin/sh: g++: comando não encontrado
Process terminated with status 127 (0 minute(s), 0 second(s))
0 error(s), 0 warning(s) (0 minute(s), 0 second(s))
```
Isso acontece por que o programa `g++` não foi instalado. Para resolver tal situação, execute o comando:
```
sudo dnf install make automake gcc gcc-c++ kernel-devel xterm
```
Agora, se no futuro vai pensar em programar em outra linguagem de programação, você pode instalar todos os pacotes necessários voltados para desenvolvimento. 
Para isso execute o comando:
```
sudo dnf groupinstall "Development Tools" "Development Libraries"
```
Obviamente, esse último comando será bem mais completo que o anterior.

[Site do Professor](https://sites.google.com/a/a.recife.ifpe.edu.br/monitoriac/home)
[Canal SempreUpdate](https://sempreupdate.com.br/como-instalar-o-codeblocks-no-fedora/)
