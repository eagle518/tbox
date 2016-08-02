/*!The Treasure Box Library
 * 
 * TBox is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 * 
 * TBox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with TBox; 
 * If not, see <a href="http://www.gnu.org/licenses/"> http://www.gnu.org/licenses/</a>
 * 
 * Copyright (C) 2016, Olexander Yermakov All rights reserved.
 *
 * @author      ruki
 * @file        blizzard.h
 * @ingroup     hash
 *
 */
#ifndef TB_HASH_BLIZZARD_H
#define TB_HASH_BLIZZARD_H

/* //////////////////////////////////////////////////////////////////////////////////////
 * includes
 */
#include "prefix.h"

/* //////////////////////////////////////////////////////////////////////////////////////
 * extern
 */
__tb_extern_c_enter__

/* //////////////////////////////////////////////////////////////////////////////////////
 * interfaces
 */

/*! make blizzard hash
 *
 * Blizzard One-Way Hash algorithm from MPQ
 *
 * @param data      the data
 * @param size      the size
 * @param seed      uses this seed if be non-zero
 *
 * @return          the blizzard value
 */
tb_size_t           tb_blizzard_make(tb_byte_t const* data, tb_size_t size, tb_size_t seed);

/*! make blizzard hash from c-string
 *
 * @param cstr      the c-string
 * @param seed      uses this seed if be non-zero
 *
 * @return          the blizzard value
 */
tb_size_t           tb_blizzard_make_from_cstr(tb_char_t const* cstr, tb_size_t seed);

/* //////////////////////////////////////////////////////////////////////////////////////
 * extern
 */
__tb_extern_c_leave__

#endif
