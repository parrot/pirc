#!perl
# Copyright (C) 2008, The Perl Foundation.
# $Id$


use lib "../../lib";
use Parrot::Test tests => 1;

pirc_2_pasm_is(<<'CODE', <<'OUTPUT', "subflags");
.sub todo
.end
CODE
todo:
    get_params
    set_returns
    returncc
OUTPUT


# Local Variables:
#   mode: cperl
#   cperl-indent-level: 4
#   fill-column: 100
# End:
# vim: expandtab shiftwidth=4: