<?php
/**
 * @file
 *  Defines the form used to configure the 'alert_message' variable
 */

function alert_admin() {

  $form['description']['#markup'] =  '<p><strong><em>Alert</em></strong> allows you to generate a custom alert message.</p>';

  $form['alert_custom_message'] = array(
    '#type' => 'textfield',
    '#title' => t('Custom Message'),
    '#description' => t('Input your new alert message.'),
  );
  return system_settings_form($form);
}
