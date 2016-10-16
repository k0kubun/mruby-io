#include "mruby.h"
#include <fcntl.h>

void
mrb_init_fcntl(mrb_state *mrb)
{
  struct RClass *fcnt;

  fcnt = mrb_define_module(mrb, "Fcntl");

  mrb_define_const(mrb, fcnt, "FD_CLOEXEC", mrb_fixnum_value(FD_CLOEXEC));
  mrb_define_const(mrb, fcnt, "F_DUPFD",    mrb_fixnum_value(F_DUPFD));
  mrb_define_const(mrb, fcnt, "F_GETFD",    mrb_fixnum_value(F_GETFD));
  mrb_define_const(mrb, fcnt, "F_GETFL",    mrb_fixnum_value(F_GETFL));
  mrb_define_const(mrb, fcnt, "F_GETLK",    mrb_fixnum_value(F_GETLK));
  mrb_define_const(mrb, fcnt, "F_RDLCK",    mrb_fixnum_value(F_RDLCK));
  mrb_define_const(mrb, fcnt, "F_SETFD",    mrb_fixnum_value(F_SETFD));
  mrb_define_const(mrb, fcnt, "F_SETFL",    mrb_fixnum_value(F_SETFL));
  mrb_define_const(mrb, fcnt, "F_SETLK",    mrb_fixnum_value(F_SETLK));
  mrb_define_const(mrb, fcnt, "F_SETLKW",   mrb_fixnum_value(F_SETLKW));
  mrb_define_const(mrb, fcnt, "F_UNLCK",    mrb_fixnum_value(F_UNLCK));
  mrb_define_const(mrb, fcnt, "F_WRLCK",    mrb_fixnum_value(F_WRLCK));
  mrb_define_const(mrb, fcnt, "O_ACCMODE",  mrb_fixnum_value(O_ACCMODE));
  mrb_define_const(mrb, fcnt, "O_APPEND",   mrb_fixnum_value(O_APPEND));
  mrb_define_const(mrb, fcnt, "O_CREAT",    mrb_fixnum_value(O_CREAT));
  mrb_define_const(mrb, fcnt, "O_EXCL",     mrb_fixnum_value(O_EXCL));
  mrb_define_const(mrb, fcnt, "O_NDELAY",   mrb_fixnum_value(O_NDELAY));
  mrb_define_const(mrb, fcnt, "O_NOCTTY",   mrb_fixnum_value(O_NOCTTY));
  mrb_define_const(mrb, fcnt, "O_NONBLOCK", mrb_fixnum_value(O_NONBLOCK));
  mrb_define_const(mrb, fcnt, "O_RDONLY",   mrb_fixnum_value(O_RDONLY));
  mrb_define_const(mrb, fcnt, "O_RDWR",     mrb_fixnum_value(O_RDWR));
  mrb_define_const(mrb, fcnt, "O_TRUNC",    mrb_fixnum_value(O_TRUNC));
  mrb_define_const(mrb, fcnt, "O_WRONLY",   mrb_fixnum_value(O_WRONLY));
}
