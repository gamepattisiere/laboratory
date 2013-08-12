#Makefile

# �v���O�������ƃI�u�W�F�N�g�t�@�C����
program = Hello

# ls �� �t�@�C���A�f�B���N�g�������������āA
# ��������ē����Č��ʂ̕�����  directory �� d �Ō��������āA
# �f�B���N�g�������𒊏o���� http://osima.jp/memo/cygwin-get-directory-in-curdir.html
SUBDIR := $(shell ls -l | awk '{print $$1,$$9}' | grep "^d" | awk '{print $$2}')

SRCS = $(shell ls *.cpp)
OBJS = $(SRCS:.cpp=.o)
HEADS = $(shell ls *.hpp)

# ��`�ς݃}�N���̍Ē�`
CC = gcc
CFLAGS = -g -Wall
CPPOPTION = -lstdc++

# �T�t�B�b�N�X���[���K�p�Ώۂ̊g���q�̒�`
.SUFFIXES: .c .cpp .o

#�v���C�}���^�[�Q�b�g
# �T�u�f�B���N�g���� make ���ċA�I�ɌĂяo��
subsystem: $(program)
	$(MAKE) -C subdir

$(program): $(OBJS)
	$(CC) -o $(program) $^ $(CPPOPTION)

# �T�t�B�b�N�X���[��
.c .cpp .o:
	$(CC) $(CFLAGS) -c $<

# �T�u�f�B���N�g���� make �Ăяo��
subsystem:
	cd Macro && $(MAKE)

# �t�@�C���폜�p�^�[�Q�b�g
.PHONY: clean
clean:
	$(RM) *~ *.o $(OBJS)

# �w�b�_�t�@�C���̈ˑ��֌W
.PHONY: depend
depend: $(SRCS:.cpp=.o)
	-@ $(RM) depend.inc
	-@ for i in $^; do\
		cpp -MM $$i | sed "s/\ [_a-zA-Z0-9][_a-zA-Z0-9]*\.cpp//g" >> depend.inc;\
	done

-include depend.inc