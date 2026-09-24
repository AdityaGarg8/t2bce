savedcmd_t2bce_dma.mod := printf '%s\n'   queue.o | awk '!x[$$0]++ { print("./"$$0) }' > t2bce_dma.mod
