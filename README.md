```
Date = 22-02-20
Author = Seong Kun Bak <tjdrns227@gmail.com>
```

# AnnePro2 QMK tools by Kun

## Initialization

For Make QMK Layout, Compile, Flash.
this guide is for Window + Wsl2 Enviornment.
but, you can use docker images, layout in another system.

! If you want to make own Layout, refer [QMK Docs]().

For compile your layout, absolutely recommend use **Docker** with this DockerFile.
Also it's already in [Docker hub]()

If you want use it locally, install original annepro2-qmk tools from [OpenAnnePro]().

## Usage

### Layout Editing.
First, To make own Layout read [QMK Docs]() and make keymap.c, config.h, rules.mk.
Then gather them in one folder like kun folder.

### Compile in Docker.

If you want original Layout or Default Layout, you don't need to compile.
just use **annepro2_c18_kun.bin** or **annepro2_c18_default.bin** to flash.

If you make your own layout, Install docker image(follow below section)

> 1-1. Install **Docker Image** or build image
> `docker pull tjdrns27/annepro2:v0.2`

> 1-2. Install Docker Image or **build image**

`docker build .`

> 2. docker run with your layout files.

`docker run --rm -it -v $PWD:/home/kun -w /home/kun tjdrns27/annepro2:v0.2`

> 3. Copy your layout folder to compile folder **In docker container**.

`cp /home/kun/$your_folder ./home/dev/annepro2_tools`

`$your_folder` is layout folder for compile
compile folder is /home/dev/annepro2/keyboards/annepro2/

> 4. Compile.

`make annepro2/c18`

* Should No any errors! if you error in another folder(not from you), remove it and again.

> 5. Take compiled .bin file.

`mv /home/dev/annepro2-tools/$your_folder.bin /home/kun/`

> 6. End.

Then you have compiled.bin file in your $PWD(the directory used to mount docker container)

### Flash. (Window)

> 1. Download annepro2_tool.exe
> 2. Open CMD in 
> 3. In cmd on program's directory 
`annepro2_tool.exe ./annepro2_c18_kun.bin`

## KUN Layer.

The Concept of Layer and keymap is in [kun-layer_Keymap]()
