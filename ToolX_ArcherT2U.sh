#!/bin/bash
PS3="ToolX_ArcherT2U>"

##ToolX_ArcherT2U##
##################
##START ToolX_ArcherT2U##
ToolX_ArcherT2U()
{
ToolX_ArcherT2U=("Instalar: mt7610u_wifi_sta_v3002_dpo_20130916" "Instalar: t2u-driver" "Cair fora")
select opt in "${ToolX_ArcherT2U[@]}"; do
  if [ "$opt" = "Cair fora" ]; then
  echo "Saindo... Obrigado por utilizar o Script ToolX_ArcherT2U!" && sleep 1 && clear
  exit 0
  	elif [ "$opt" = "Instalar: mt7610u_wifi_sta_v3002_dpo_20130916" ]; then
	     mt7610u
    elif [ "$opt" = "Instalar: t2u-driver" ]; then
       t2udriver
  else
  echo "Opção inválida!"
  fi
done
}
##END ToolX_ArcherT2U##
################
##/ToolX_ArcherT2U##

mt7610u()
{
echo "Instalando: mt7610u_wifi_sta_v3002_dpo_20130916"
if [ -e "/etc/Wireless" ]
  then
    make
    make install
    cp RT2870STA.dat /etc/Wireless/RT2870STA/RT2870STA.dat
    echo "você precisa reiniciar o sistema: reboot"
  else
    mkdir /etc/Wireless
    mkdir /etc/Wireless/RT2870STA/
    make
    make install
    cp RT2870STA.dat /etc/Wireless/RT2870STA/RT2870STA.dat
    echo "você precisa reiniciar o sistema: reboot"
}

t2udriver()
{
  echo "Instalando: t2u-driver"
  chmod 777 t2u-driver-installer.py
  python3 t2u-driver-installer.py
  sudo ifconfig ra0 up
  sudo service networking restart
  sudo service network-manager restart
  echo "Para ativar/desativar: sudo t2u-driver"
}

##Bem Vindo##
#########################
##Inicio Bem Vindo##
clear && echo ""
echo "'########::'#######:::'#######::'##:::::::'##::::'##:::::::::::::::::::'###::::'##::::'##:'########:::'#######::"
echo "... ##..::'##.... ##:'##.... ##: ##:::::::. ##::'##:::::::::::::::::::'## ##:::. ##::'##:: ##.... ##:'##.... ##:"
echo "::: ##:::: ##:::: ##: ##:::: ##: ##::::::::. ##'##:::::::::::::::::::'##:. ##:::. ##'##::: ##:::: ##: ##::::..::"
echo "::: ##:::: ##:::: ##: ##:::: ##: ##:::::::::. ###:::::::'#######::::'##:::. ##:::. ###:::: ########:: ########::"
echo "::: ##:::: ##:::: ##: ##:::: ##: ##::::::::: ## ##::::::........:::: #########::: ## ##::: ##.. ##::: ##.... ##:"
echo "::: ##:::: ##:::: ##: ##:::: ##: ##:::::::: ##:. ##::::::::::::::::: ##.... ##:: ##:. ##:: ##::. ##:: ##:::: ##:"
echo "::: ##::::. #######::. #######:: ########: ##:::. ##:::::::::::::::: ##:::: ##: ##:::. ##: ##:::. ##:. #######::"
echo ":::..::::::.......::::.......:::........::..:::::..:::::::::::::::::..:::::..::..:::::..::..:::::..:::.......:::"
echo ""
echo -e "\033[1;32mSeja bem vindo ao ToolX_ArcherT2U!\033[0m"
echo -e "\033[1;32mLinkedin:\033[0m https://www.linkedin.com/in/thalles-canela/"
echo -e "\033[1;32mYouTube: \033[0m https://www.youtube.com/c/aXR6CyberSecurity"
echo -e "\033[1;32mFacebook:\033[0m https://www.facebook.com/axr6PenTest"
echo -e "\033[1;32mGithub:  \033[0m https://github.com/ThallesCanela"
echo -e "\033[1;32mGithub:  \033[0m https://github.com/aXR6"
echo -e "\033[1;32mTwitter: \033[0m https://twitter.com/Axr6S"
echo -e "\033[1;32mPadim:   \033[0m https://www.padrim.com.br/aXR6CyberSecurity"
echo -e "\033[1;31m:=> Não seja sujo! Se achou de graça, distribua de graça repassando os devidos créditos! \033[0m"
echo -e "\033[1;31m:=> Funcional no: Linux toolx 4.19.0-kali1-amd64 #1 SMP Debian 4.19.13-1kali1 (2019-01-03) x86_64 GNU/Linux \033[0m"
echo -e "\033[1;31m:=> Usuário ROOT necessário!! \033[0m"
echo ""
ToolX_ArcherT2U
##Fim Bem Vindo##
#######################
##/Bem Vindo##