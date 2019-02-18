<b># ToolXMenu<b>

<b>Seja bem vindo ao ToolXMenu!<b><br>
Linkedin: https://www.linkedin.com/in/thalles-canela/ <br>
YouTube:  https://www.youtube.com/c/aXR6CyberSecurity <br>
Facebook: https://www.facebook.com/axr6PenTest <br>
Github:   https://github.com/ThallesCanela <br>
Github:   https://github.com/aXR6 <br>
Twitter:  https://twitter.com/Axr6S <br>
Padim:    https://www.padrim.com.br/aXR6CyberSecurity <br>
Não seja sujo! Se achou gratuitamente, distribua gratuitamente repassando os devidos créditos! <br>
Funcional no: Linux toolx 4.19.0-kali1-amd64 #1 SMP Debian 4.19.13-1kali1 (2019-01-03) x86_64 GNU/Linux <br>
Usuário ROOT necessário!! <br>

# Utilização dos seguintes repositórios:
```
https://github.com/ivannieto/archer-t2u-ubuntu-installer
https://github.com/chenhaiq/mt7610u_wifi_sta_v3002_dpo_20130916
```

# Função:
```
Não obtive sucesso utilizando apenas um repositório, apenas com a junção (compilação/instalação) dos dois o meu dispositivo funcionou.
Fiz esse script com o objetivo de automatizar o processo de compilação dos drivers.
```

# 1º - Configurando as placas de rede ( COMANDO - EDITAR ):
```
$ nano /etc/network/interfaces
```

# 2º - Configurando as placas de rede ( OBS ):
```
Obs.: Você deve configurar com os nomes que aparecem na saída de "ifconfig", no meu caso:
Placa de rede cabeada: enp7s0
Placa de rede sem-fio: wlp6s0

Obs.: A única excessão é o nome do dispositivo que você irá definir como:
Dispositivo TP-Link ArcherT2U: ra0

Obs.: Na configuração do arquivo "/etc/network/interfaces" eu define como "automática" (DHCP) todos os recebimentos de IP. Você pode definir como "estática".

Obs.: Na configuração "estática" você deve setar as faixas de IP da sua rede.
```

# 3º - Configurando as placas de rede ( CONFIGURAÇÃO - automática ):
```
auto lo
iface lo inet loopback
# The loopback network interface # Não mexer nessa configuração.

auto enp7s0
allow-hotplug enp7s0
iface enp7s0 inet dhcp

auto ra0
allow-hotplug ra0
iface ra0 inet dhcp

auto wlp6s0
allow-hotplug wlp6s0
iface wlp6s0 inet dhcp
```

# 3º - Configurando as placas de rede ( CONFIGURAÇÃO - estática ):
```
auto lo
iface lo inet loopback
# The loopback network interface # Não mexer nessa configuração.
 
auto enp7s0
allow-hotplug enp7s0 
iface enp7s0 inet static
    address 192.168.0.10
    netmask 255.255.255.0
    network 192.168.0.0
    broadcast 192.168.0.255

auto ra0
allow-hotplug ra0
iface ra0 inet static
    address 192.168.100.20
    netmask 255.255.255.0
    network 192.168.100.0
    broadcast 192.168.100.255

auto wlp6s0
allow-hotplug wlp6s0
iface wlp6s0 inet static
    address 10.42.43.1
    netmask 255.255.255.0
    network 10.42.43.0
    broadcast 10.42.43.255
```

# 4º - Configurando as placas de rede ( COMANDO - REINICIAR ):
```
Reiniciar as placas:
$ sudo /etc/init.d/networking restart
```

# 5º - Instalação via Menu:
```
$ ./ToolX_ArcherT2U.sh
```

# 6º - Modo de usar:
```
$ t2u-driver
```
