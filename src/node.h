/* akvcam, virtual camera for Linux.
 * Copyright (C) 2018  Gonzalo Exequiel Pedone
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef AKVCAM_NODE_H
#define AKVCAM_NODE_H

#include <linux/types.h>

#include "node_types.h"
#include "device_types.h"
#include "events_types.h"

// public
akvcam_node_t akvcam_node_new(int32_t device_num);
void akvcam_node_delete(akvcam_node_t self);
akvcam_node_t akvcam_node_ref(akvcam_node_t self);

int64_t akvcam_node_id(const akvcam_node_t self);
int32_t akvcam_node_device_num(const akvcam_node_t self);
akvcam_events_t akvcam_node_events_nr(const akvcam_node_t self);
akvcam_events_t akvcam_node_events(const akvcam_node_t self);
bool akvcam_node_blocking(const akvcam_node_t self);
void akvcam_node_set_blocking(akvcam_node_t self, bool blocking);

// public static
struct v4l2_file_operations *akvcam_node_fops(void);

#endif // AKVCAM_NODE_H
