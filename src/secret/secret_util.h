/*
 * secret_util.h: secret related utility functions
 *
 * Copyright (C) 2016 Red Hat, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see
 * <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __VIR_SECRET_H__
# define __VIR_SECRET_H__

# include "internal.h"
# include "virstoragefile.h"

char *virSecretGetSecretString(virConnectPtr conn,
                               bool encoded,
                               virStorageAuthDefPtr authdef,
                               virSecretUsageType secretUsageType)
    ATTRIBUTE_NONNULL(1) ATTRIBUTE_NONNULL(3) ATTRIBUTE_RETURN_CHECK;
#endif /* __VIR_SECRET_H__ */
