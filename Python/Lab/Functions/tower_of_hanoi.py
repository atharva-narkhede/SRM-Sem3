def TOH(numdisk, frm_disk, to_disk, aux_disk):

    if numdisk == 1:
        print("Move disk [1] from rod [",
              frm_disk, "] to rod {", to_disk, '}')
        return

    TOH(numdisk-1, frm_disk, aux_disk, to_disk)

    print("Move disk ["+str(numdisk) + "] from rod [",
          str(frm_disk)+" ] to rod {", to_disk, '}')
    TOH(numdisk-1, aux_disk, to_disk, frm_disk)


numdisk = int(input('Enter number of disks = '))

TOH(numdisk, 'A', 'C', 'B')
