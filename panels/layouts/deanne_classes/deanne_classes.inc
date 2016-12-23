<?php

/**
 * @file
 * Defines a naked two-column layout with a subcolumn bar.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Deanne Classes'),
  'category' => t('Deanne'),
  'icon' => 'deanne_classes.png',
  'theme' => 'deanne_classes',
  'regions' => array(
    'left' => t('Left'),
    'right' => t('Right'),
  ),
);
