/*
 * Copyright   Actility, SA. All Rights Reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 only, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License version 2 for more details (a copy is
 * included at /legal/license.txt).
 *
 * You should have received a copy of the GNU General Public License
 * version 2 along with this work; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 * Please contact Actility, SA.,  4, rue Ampere 22300 LANNION FRANCE
 * or visit www.actility.com if you need additional
 * information or have any questions.
 *
 * id $Id: SearchResultHandler.java 6104 2013-10-15 15:31:47Z mlouiset $
 * author $Author: mlouiset $
 * version $Revision: 6104 $
 * lastrevision $Date: 2013-10-15 17:31:47 +0200 (Tue, 15 Oct 2013) $
 * modifiedby $LastChangedBy: mlouiset $
 * lastmodified $LastChangedDate: 2013-10-15 17:31:47 +0200 (Tue, 15 Oct 2013) $
 */

package com.actility.m2m.storage;

/**
 * interface necessary to handle search results
 *
 * @author ventrill
 *
 */
public interface SearchResultHandler {

    /**
     * Called for each serach result
     *
     * @param fullPath
     * @param docContent
     * @throws Exception
     */
    public void handle(String fullPath, String docContent) throws Exception;
}
