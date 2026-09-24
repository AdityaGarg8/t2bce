savedcmd_t2bce_dma.o := ld -m elf_x86_64 -z noexecstack --no-warn-rwx-segments   -r -o t2bce_dma.o @t2bce_dma.mod  ; /usr/lib/modules/7.1.8-arch1-Watanare-T2-3-t2/build/tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --sls --static-call --uaccess --prefix=16  --link  --module t2bce_dma.o

t2bce_dma.o: $(wildcard /usr/lib/modules/7.1.8-arch1-Watanare-T2-3-t2/build/tools/objtool/objtool)
