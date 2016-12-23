<?php

/**
 * @file
 * Defines a naked two-column layout with a subcolumn bar.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Deanne Home'),
  'category' => t('Deanne'),
  'icon' => 'deanne_home.png',
  'theme' => 'deanne_home',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left'),
    'middle' => t('Middle'),
    'right' => t('Right'),
  ),
);
