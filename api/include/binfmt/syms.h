/************************************************************************/
/* rop-tool - A Return Oriented Programming and binary exploitation     */
/*            tool                                                      */
/*                                                                      */
/* Copyright 2013-2015, -TOSH-                                          */
/* File coded by -TOSH-                                                 */
/*                                                                      */
/* This file is part of rop-tool.                                       */
/*                                                                      */
/* rop-tool is free software: you can redistribute it and/or modify     */
/* it under the terms of the GNU General Public License as published by */
/* the Free Software Foundation, either version 3 of the License, or    */
/* (at your option) any later version.                                  */
/*                                                                      */
/* rop-tool is distributed in the hope that it will be useful,          */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of       */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the        */
/* GNU General Public License for more details.                         */
/*                                                                      */
/* You should have received a copy of the GNU General Public License    */
/* along with rop-tool.  If not, see <http://www.gnu.org/licenses/>     */
/************************************************************************/
#ifndef DEF_API_BINFMT_SYMS_H
#define DEF_API_BINFMT_SYMS_H

r_binfmt_sym_s* r_binfmt_sym_new(void);
void r_binfmt_syms_free(r_binfmt_s *bin);
void r_binfmt_syms_sort(r_binfmt_s *bin);
const char* r_binfmt_get_sym_by_addr(r_binfmt_s *bin, addr_t addr);
addr_t r_binfmt_get_sym_by_name(r_binfmt_s *bin, const char *name);


#endif
