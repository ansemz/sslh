/* Generated by conf2struct (https://www.rutschle.net/tech/conf2struct/README)
 * on Wed Jul 10 15:27:23 2024. 

# conf2struct: generate libconf parsers that read to structs
# Copyright (C) 2018-2021  Yves Rutschle
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# 1. Redistributions of source code must retain the above copyright notice,
#    this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
# SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.

*/
 
#ifndef C2S_ECHOCFG_H
#define C2S_ECHOCFG_H
#ifdef LIBCONFIG
#    include <libconfig.h>
#endif



struct echocfg_listen_item {
	char*	host;
	char*	port;
};

struct echocfg_item {
	int	udp;
	char*	prefix;
	size_t	listen_len;
	struct echocfg_listen_item* listen;
};

int echocfg_parse_file(
        const char* filename,
        struct echocfg_item* echocfg, 
        const char** errmsg);

void echocfg_fprint(
    FILE* out,
    struct echocfg_item *echocfg,
    int depth);

int echocfg_cl_parse(
    int argc,
    char* argv[],
    struct echocfg_item *echocfg);

#endif
